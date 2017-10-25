#ifndef TF_CONVERSIONS_H
#define TF_CONVERSIONS_H

#include <geometry_msgs/PointStamped.h>
#include <geometry_msgs/PoseStamped.h>
#include <tf2_ros/transform_listener.h>
#include "tf2_geometry_msgs/tf2_geometry_msgs.h"


namespace transform_conversions{

  geometry_msgs::PointStamped transform_point(geometry_msgs::PointStamped point, std::string target_frame);
  geometry_msgs::PoseStamped transform_point(geometry_msgs::PoseStamped pose, std::string source_frame, std::string target_frame);

}

#endif
