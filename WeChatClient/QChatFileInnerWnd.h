#pragma once

//设置编码格式为utf-8
#pragma execution_character_set("utf-8")

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>
#include <QProgressBar>

class QChatFileInnerWnd : public QWidget
{
	Q_OBJECT
public:

	QChatFileInnerWnd(QWidget* p = nullptr);
public slots:
	void slot_openFileBtnClick();
	void slot_copyFileBtnClick();
	void slot_openFileDirBtnClick();
	void slot_downloadFileBtnClick();
public:
	void sendFileShow();
	void recvFileShow();
public:
	QVBoxLayout* m_vLayout;

	QHBoxLayout* m_hLayout1;
	QVBoxLayout* m_vLayout1;
	
	QProgressBar* m_progressBar;;

	QHBoxLayout* m_hLayout2;

	QLabel* m_fileIcon;
	QLabel* m_fileName;
	QLabel* m_fileSize;

	QLabel* m_sendState;//发送状态  
	QPushButton* m_openFile;//打开文件
	QPushButton* m_copyFile;//拷贝
	QPushButton* m_openFileDir;//打开所在目录
	QPushButton* m_downLoad;

	QString m_fileFullpath = "";
	QString m_fileFullDir = "";
	QString m_serveFilePath = "";//远程的文件地址
};