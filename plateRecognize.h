#pragma once
#ifndef PLATERECOGNIZE_H
#define PLATERECOGNIZE_H

#include "SobelLocate.h"

class PlateRecognize
{
public:
	PlateRecognize();
	~PlateRecognize();

	/**
	* src ��ʶ����ԭͼ
	* return �����ַ���
	*/
	String plateRecognize(Mat src);

private:
	SobelLocate* sobelLocate = 0;
};


#endif