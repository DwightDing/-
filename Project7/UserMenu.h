//
//  UserMenu.h
//
//  Created by DwightDing on 16/6/13.
//  Copyright ? 2016�� Ding Chenguang. All rights reserved.
//
#ifndef USERMENU_H
#define USERMENU_H
#include "FileAndDir.h"

class UserMenu
{

public:
	UserMenu();
	~UserMenu();
	void Register();      //�û�ע�����
	void Login();         //�û���¼����
	void MainMenu();      //��ӭ������
	void FunctionMenu();  //���ܽ���
	void HelpWord();      //�����ĵ�	
};

#endif