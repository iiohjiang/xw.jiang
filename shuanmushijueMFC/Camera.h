#pragma once
#include <opencv2\core.hpp>
#include <opencv2\highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
class Camera
{
public:
	Camera();
	~Camera();
	void showpic(VideoCapture cap, String str,int n);
	bool imwriteImg(VideoCapture cap, String str, int n);
};

