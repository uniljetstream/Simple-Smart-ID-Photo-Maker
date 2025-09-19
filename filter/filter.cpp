#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::Mat image = cv::imread("test.jpg");
    cv::Mat result;

    // Test autocomplete - try typing cv:: to see suggestions
    cv::cvtColor(image, result, cv::COLOR_BGR2GRAY);
    cv::cvtColor(image, )

    return 0;
}