#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>


using namespace std;
using namespace cv;

Mat orgim;
Mat dst;
int trackval = 1;


void track(int, void*)

{
	addWeighted(orgim, trackval / 7.0, dst, 0.5, 0, dst);
	imshow("Add Picture", dst);


}


int main()

{
	orgim = imread("moon.jpg");
	resize(orgim, orgim, Size(1000, 1000));

	GaussianBlur(orgim, dst, Size(3, 3), 11);

	namedWindow("Trackbar", WINDOW_AUTOSIZE);

	createTrackbar("Filter", "Trackbar", &trackval, 100, track);

	imshow("Orginal", orgim);

	waitKey(0);

	return 0;






}