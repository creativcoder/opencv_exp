// opencv_starter.cpp : starter boilerplate for opencv experiments
//

#include "stdafx.h"
#include <opencv2\highgui\highgui.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	Mat im = imread("C://aeon.png");
	if (im.empty()){
		cout << "Cannot load image" << endl;
		return -1;
	}
	imshow("Image", im);
	waitKey(0);

	return 0;
}

