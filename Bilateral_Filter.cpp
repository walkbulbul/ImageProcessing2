#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>


using namespace std;
using namespace cv;

Mat dst;
Mat dsl;




int main()

{
	Mat src = imread("fit.jpg");

	bilateralFilter(src, dst, 15, 100, 100);
	GaussianBlur(src, dsl, Size(37, 37), 1);


	imshow("Orginal", src);

	imshow("Bileteral Filter", dst);

	imshow("Gaussian Filter", dsl);


	waitKey(0);

	return 0;




}