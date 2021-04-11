#include <ros/ros.h>
 
#include <dynamic_reconfigure/server.h>
#include <parameter_config/parameter_server_Config.h>

// callback that will get called when the dynamic_reconfigure server is sent a new configuration

void callback(parameter_config::parameter_server_Config &config, uint32_t level) {
  /**
  ROS_INFO("Reconfigure Request: %d %f %f %s %d", 
            config.prop, config.integ, config.deriv,
            config.str_param.c_str(),
            config.stability);

  **/
  std::cout << "Reconfigure Request: " << config.prop << " " << config.integ << " " << config.deriv << " " << config.str_param.c_str() << " " << config.stability;
}
 
int main(int argc, char **argv) {
  ros::init(argc, argv, "parameter_config");
 
  dynamic_reconfigure::Server<parameter_config::parameter_server_Config> server;
  dynamic_reconfigure::Server<parameter_config::parameter_server_Config>::CallbackType f;
 
  f = boost::bind(&callback, _1, _2);
  server.setCallback(f);
 
  ROS_INFO("Spinning node");
  ros::spin();
  return 0;
}