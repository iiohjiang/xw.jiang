#include "stdafx.h"
#include "Camera.h"


Camera::Camera()
{
}


Camera::~Camera()
{
}


void Camera::showpic(VideoCapture cap, String str,int n)

{
	Mat frame1;
	Mat frame2;
	cap >> frame1;
	if (n == 1)
	{
	flip(frame1, frame2, 0);
	imshow(str, frame2);
	}
	if (n == 2){
		flip(frame1, frame2, 1);
		imshow(str, frame2);
	}
}


bool Camera::imwriteImg(VideoCapture cap, String str, int n)
{
	
		Mat frame1;
		Mat frame2;
		cap >> frame1;
		if (n == 1)
		{
			flip(frame1, frame2, 0);
			imwrite(str, frame2);
		}
		if (n == 2){
			flip(frame1, frame2, 1);
			imwrite(str, frame2);
		}
		return true;	
}
