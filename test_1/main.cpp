#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <string>
#include "utils.h"

int main(int argc, char *argv[])
{
  (void)argc;
  (void)argv;
  cv::Mat img_clear (124, 124, CV_8UC3);

  std::string window_name = "Display window";
  cv::namedWindow (window_name);
  cv::imshow (window_name, img_clear);

  cv::waitKey ();

  cv::Mat explosion = cv::imread ("explosion.jpg");

  cv::waitKey ();

  cv::Point text_org (img_clear.cols / 3, img_clear.rows / 2);

  cv::waitKey ();



  auto font_face = cv::FONT_HERSHEY_SCRIPT_SIMPLEX;
  auto font_scale = 2;
  cv::Scalar color (200, 100, 50);
  auto thickness = 3;



  auto countdown = 10;
  while (countdown > 0)
    {
      cv::Mat img_cur = img_clear.clone ();
      std::string text = int_to_string (countdown);
      cv::putText (img_cur, text, text_org, font_face, font_scale, color, thickness, 8);
      cv::imshow (window_name, img_cur);
      int key_num = cv::waitKey (1000);
      if (key_num > 0)
        cv::waitKey ();
      countdown--;
    }
  cv::imshow ("Display window", explosion);
  cv::waitKey ();
  return 0;
}
