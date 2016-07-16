#pragma comment (lib, "libs/opencv_core245")
#pragma comment (lib, "libs/opencv_highgui245")
#pragma comment (lib, "libs/opencv_imgproc245")

#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"

#include <iostream>
#include <conio.h>
using namespace cv;
using namespace std;
void display(int number);


int main(int argc, char** argv)
{
	display(1);
	return 0;
}

void display(int number)
{
	Mat image[5];
	Mat temp(Size(900, 660), CV_8UC3, Scalar(200, 200, 200));
	Rect forone;
	Mat next;
	Rect nextRoi;
	Mat image_temp = imread("D:\\Star.jpg");
	/*for (int i = 0; i < number; i++)
	{
		image[i] = imread("D:\\Star.png");

		if (!image[i].data)
		{
			cout << "Image not found";
			cout << "image not loaded";
			system("Pause");
			waitKey(1000);
		}
		//imshow("Image 1", image[i]);
		//waitKey(10000);
	}*/
	
	switch (number)
	{
		case 1:
			forone = Rect(200,0,500,660);
			next = imread("D:\\Star.jpg");
			nextRoi = Rect(700, 0, 200, 660);
			image_temp.copyTo(temp(forone));
			next.copyTo(temp(nextRoi));
			namedWindow("TEMP");
			imshow("TEMP", temp);
			waitKey(1000);
			break;
	/*	case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			break;
*/
		default:
			break;

	}
		
}


	//namedWindow("Image 1");
		//imshow("Image 1", image);
		//waitKey(10000);



void prepareImage()
{
	Mat temp(Size(900, 660), CV_8UC3, Scalar(200, 200, 200));
	Mat next = imread("D:\\next.jpg");
	Mat previous = imread("D:\\previous.jpg");
	Rect letterRoi = Rect(200, 0, 500, 660);
	Rect nextRoi = Rect(700, 0, 200, 660);
	Rect previousRoi = Rect(0, 0, 200, 660);
	Mat alph = imread("D:\\A.jpg");
	alph.copyTo(temp(letterRoi));
	next.copyTo(temp(nextRoi));
	previous.copyTo(temp(previousRoi));
	namedWindow("TEMP");
	imshow("TEMP", temp);
	waitKey(10000);
}
