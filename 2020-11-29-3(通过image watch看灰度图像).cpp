#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
#include<opencv2/imgproc.hpp>
#include <opencv2/imgproc/types_c.h>// CV_RGB2GRAY的头文件
#include<iostream>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	Mat src_image, dst_image;
	src_image = imread("F:\\image\\test.png");
	if (src_image.empty())
	{
		cout << "could not load image!" << endl;
	}
	imshow("src_image", src_image);

	cvtColor(src_image, dst_image, CV_RGB2GRAY);
	imshow("dst_image", dst_image);
	system("pause");
	waitKey(0);
}