#include "feature_extraction.h"

Mat img, keypointImg;
int minHessian = 400;

int main(){

    img = cv::imread("/home/bhavik/projects/cv/img/apple2.jpg"); 

    Ptr<cv::xfeatures2d::SURF> detector = cv::xfeatures2d::SURF::create(minHessian);
    
    std::vector<KeyPoint> keypoints;
    detector->detect(img, keypoints);

    drawKeypoints(img, keypoints, keypointImg);

    imshow("SURF Keypoints", keypointImg);
    waitKey(0);    

    return 0;
}