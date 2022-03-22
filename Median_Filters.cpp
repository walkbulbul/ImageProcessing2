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
	if (trackval % 2 == 1)

	{
		medianBlur(orgim, dst, trackval);

		printf("%d", trackval);
		imshow("Median Blur", dst);




	}

}