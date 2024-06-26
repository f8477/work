#include "postpage.h"
#include "ui_postpage.h"

PostPage::PostPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PostPage)
{
    ui->setupUi(this);
    setMaximumSize(1111,652);
    setMinimumSize(1111,652);


    postTextEdit = new QTextEdit(this);


    uploadImageButton = new QPushButton("Upload Image", this);
    uploadVideoButton = new QPushButton("Upload Video", this);


    postButton = new QPushButton("Post", this);


    mediaPreviewLabel = new QLabel(this);
    mediaPreviewLabel->setFixedSize(300, 300);
    mediaPreviewLabel->setStyleSheet("border: 1px solid black;");
    mediaPreviewLabel->setAlignment(Qt::AlignCenter);


    connect(uploadImageButton, &QPushButton::clicked, this, &PostPage::onUploadImageButtonClicked);
    connect(uploadVideoButton, &QPushButton::clicked, this, &PostPage::onUploadVideoButtonClicked);
    connect(postButton, &QPushButton::clicked, this, &PostPage::onPostButtonClicked);


    QVBoxLayout *mainLayout = new QVBoxLayout();
    mainLayout->addWidget(postTextEdit);

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(uploadImageButton);
    buttonLayout->addWidget(uploadVideoButton);
    mainLayout->addLayout(buttonLayout);

    mainLayout->addWidget(mediaPreviewLabel);
    mainLayout->addWidget(postButton);

    setLayout(mainLayout);
}

PostPage::~PostPage()
{
    delete ui;
}

void PostPage::onUploadImageButtonClicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image Files (*.png *.jpg *.bmp)"));
    if (!fileName.isEmpty()) {
        QPixmap pixmap(fileName);
        mediaPreviewLabel->setPixmap(pixmap.scaled(mediaPreviewLabel->size(), Qt::KeepAspectRatio, Qt::SmoothTransformation));
    }
}

void PostPage::onUploadVideoButtonClicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open Video"), "", tr("Video Files (*.mp4 *.avi *.mkv)"));
    if (!fileName.isEmpty()) {

        mediaPreviewLabel->setText("Video selected: " + fileName);
    }
}

void PostPage::onPostButtonClicked()
{
    QString postText = postTextEdit->toPlainText();
    if (postText.isEmpty() && mediaPreviewLabel->pixmap() == nullptr && mediaPreviewLabel->text().isEmpty()) {

        QMessageBox::warning(this, tr("Warning"), tr("Post text or media is required"));
    } else {

        QMessageBox::information(this, tr("Post"), tr("Your post has been submitted"));

        postTextEdit->clear();
        mediaPreviewLabel->clear();
    }
}
