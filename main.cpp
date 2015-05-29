#include <ros/ros.h>

int main(int argc, char** argv)
{
  ros::init(argc, argv, "%NODE%");
  ros::NodeHandle nh("~");

  %CLASS% %NODE%;

  ros::spin();
  return 0;
}
