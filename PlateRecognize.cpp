#include "plateRecognize.h"


PlateRecognize::PlateRecognize()
{
	sobelLocate = new SobelLocate();
}

PlateRecognize::~PlateRecognize()
{
	if (sobelLocate) {
		delete sobelLocate;
		sobelLocate = 0;
	}
}

/**
* ����ʶ�𣨶�λ+���+ʶ��
*/
String PlateRecognize::plateRecognize(Mat src)
{
	//1.���ƶ�λ
	//��λ���������ɸѡ�ĺ�ѡ����������
	vector<Mat> dst_plates;
	sobelLocate->locate(src, dst_plates);

	return String("7777777");
}
