#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>


using namespace std;
using namespace cv;


int main()

{
	Mat src = imread("fit.jpg");
	Mat dst;

	blur(src, dst, Size(4, 4));

	imshow("Picture", src);
	imshow("Blur", dst);

	waitKey(0);
	return 0;



}