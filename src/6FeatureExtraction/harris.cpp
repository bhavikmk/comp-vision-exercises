#include "feature_extraction.h"

Mat img, imgGray ,keypointImg;
int thresh = 200;
int max_thresh = 255;

int main(){

    imread("/home/bhavik/projects/cv/img/apple4.jpg");

    int blocksize = 2, apertureSize = 3;
    double k = 0.04;
    keypointImg = Mat::zeros(img.size(), CV_32FC1);

    cvtColor(img, imgGray, COLOR_BGR2GRAY);

    cv::cornerHarris(imgGray , keypointImg, blocksize, apertureSize, k);

    imshow("Keypoint img", keypointImg);
    waitKey(0);

    return 0;
}