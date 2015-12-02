#pragma once
#include <string>
#include<fstream>
#include "include/json/json.h"  

using namespace std;
//��Ϣ����MyJson�������˽�Json����ȡ������Ϣ�Ĳ��������г�Ա����Ϊ��Ϣ������ݡ�
class MyJson
{
private:
	tm time_tm; 
	string md5_s,time_s,text;
public:
	std::string name,type_s;
	
	int id;
	Json::Value _else;

public:
	MyJson(void);
	~MyJson(void);
	//����Json��Ϣ������������ʾ�����Ա��ڵ���
	void showJson_in_console();
	//����Json��Ϣ�ķ�ʽһ����һ���ַ����л�ȡ
	bool getJson(std::string charflow);
	//����Json��Ϣ�ķ�ʽ�������ļ��������л�ȡ
	bool getJson(istream& charflow);

	//����Json��Ϣ��һ��Json���С�input���ı����ݣ���ҪԤ��type_s��_else������Ϣ������Ҫ���ã����ص�char*����UTF-8����JSON��
	string PackJson(std::string input);
};
