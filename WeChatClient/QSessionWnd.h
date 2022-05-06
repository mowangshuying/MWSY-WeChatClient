#pragma once

//���ñ����ʽΪutf-8
#pragma execution_character_set("utf-8")

#include <QWidget>
#include <QVBoxLayout>
#include <QTextEdit>
#include <QPushButton>
#include <QListWidget> //�����б�

#include "QSessionTopWnd.h"
#include "QSessionToolBar.h"
#include "QGroupInfoWnd.h"
#include <QListWidget>

/*
* �Ự�Ĵ��� sesId����,�ұ���Ϣ����С����ѡ��Ҳ��һ��id��ͨ��id�����˴���Ϣ
* ���޸Ķ�Ӧ�Ĵ�����Ϣ
*/

class QSessionWnd : public QWidget 
{
	//������Ϣӳ��֧��
	Q_OBJECT
public:
	//�Ự����
	QSessionWnd(QWidget* p = nullptr);
public slots:
	void slot_sendTextBtnClick();
	void slot_emoijClicked(QString str);
	void slot_moreBtnClick();
protected:
	void dragEnterEvent(QDragEnterEvent* event);
	void dropEvent(QDropEvent* event);
public:
	//QHBoxLayout* m_hLayout;
	//more��ť����ʱ�����ʾ�������
	QGroupInfoWnd* m_groupInfoWnd;
	//���ڲ��ֹ���
	QVBoxLayout *m_vLayout;
	//�Ự���ϷŴ���
	QSessionTopWnd* m_sesTopWnd;
	//�����б���Ϣ
	//QListWidget* m_MsgWndList;
	
	QListWidget* m_MsgWndList;

	//��Ϣ�Ự��ToolBar
	QSessionToolBar* m_sesToolBar;
	//��Ҫ���͵�����
	QTextEdit* m_sendTextEdit;
	//���ڷ������ֵİ�ť
	QPushButton* m_sendTextBtn;
	//���ڿ���
	QHBoxLayout* m_hLayout1;


	//�Ựid
	qint64 m_sesId;
	//�Ự����
	QString m_name;
	//����˷���
	int64_t m_recvId;
	//�Ƿ���Ⱥ�Ự
	bool m_isGroupSes = false;
	bool m_isClicked =  false;
};