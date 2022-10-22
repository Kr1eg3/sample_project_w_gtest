#include <iostream>
#include <opencv2/core.hpp>

#include "SampleClass.h"

using namespace cv;

int main() {
    Mat mat;

    auto *sample = new SampleClass;
    delete sample;

    return 0;
}

