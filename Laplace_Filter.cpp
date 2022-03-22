#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>


using namespace std;
using namespace cv;

Mat orgim;
Mat gray;
Mat dst;
Mat abs_dst;

int main()
{
	orgim = imread("fit.jpg");
	resize(orgim, orgim, Size(500, 500));

	GaussianBlur(orgim, orgim, Size(3, 3), 5);

	//cvtColor(orgim, gray, COLOR_RGB2GRAY);

	Laplacian(orgim, dst, CV_16S, 5);
	convertScaleAbs(dst, abs_dst);


	imshow("Org.Picture", orgim);
	imshow("Picture", abs_dst);










	waitKey(0);
	return 0;

}