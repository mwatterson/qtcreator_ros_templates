#include <ros/ros.h>

class %CLASS%{
public:
    %CLASS%();
private:
    ros::NodeHandle nh_;

};
%CLASS%::%CLASS%() : nh_("~") {

}

int main(int argc, char** argv)
{
  ros::init(argc, argv, "%NODE%");
  ros::NodeHandle nh("~");

  %CLASS% %NODE%;

  ros::spin();
  return 0;
}
