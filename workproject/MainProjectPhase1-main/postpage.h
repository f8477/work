#ifndef POSTPAGE_H
#define POSTPAGE_H

#include <QWidget>
#include <QTextEdit>
#include <QPushButton>
#include <QLabel>
#include <QFileDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QMessageBox>

namespace Ui {
class PostPage;
}

class PostPage : public QWidget
{
    Q_OBJECT

public:
    explicit PostPage(QWidget *parent = nullptr);
    ~PostPage();

private slots:
    void onUploadImageButtonClicked();
    void onUploadVideoButtonClicked();
    void onPostButtonClicked();

private:
    Ui::PostPage *ui;
    QTextEdit *postTextEdit;
    QPushButton *uploadImageButton;
    QPushButton *uploadVideoButton;
    QPushButton *postButton;
    QLabel *mediaPreviewLabel;
};

#endif // POSTPAGE_H
