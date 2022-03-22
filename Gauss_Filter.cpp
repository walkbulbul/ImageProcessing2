#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <opencv2/imgproc/imgproc.hpp>


using namespace std;
using namespace cv;


Mat dst;
int coun;


int main()

{
	Mat src = imread("fit.jpg");

	while (1)
	{
		GaussianBlur(src, dst, Size(1 + coun, 1 + coun), 2);

		imshow("Orginal", src);
		imshow("Gaussian Blur", dst);

		waitKey(400);

		printf("% d\n", coun);

		coun = coun + 2;










	}

	return 0;

}