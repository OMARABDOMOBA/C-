#include <ros/ros.h>
#include <std_msgs/String.h>
#include <map>
#include <set>

class MapSetExampleNode {
private:
  ros::NodeHandle nh_;
  ros::Publisher map_pub_;
  ros::Publisher set_pub_;

public:
  MapSetExampleNode() : nh_("~") {
    // Set up publishers
    map_pub_ = nh_.advertise<std_msgs::String>("map_data", 10);
    set_pub_ = nh_.advertise<std_msgs::String>("set_data", 10);

    // Populate and publish the map
    populateAndPublishMap();

    // Populate and publish the set
    populateAndPublishSet();
  }

  void populateAndPublishMap() {
    std::map<int, std::string> my_map;

    // Populate the map
    my_map[1] = "One";
    my_map[2] = "Two";
    my_map[3] = "Three";

    // Publish the map data
    std_msgs::String map_msg;
    map_msg.data = "Map Data: ";
    for (const auto &pair : my_map) {
      map_msg.data += std::to_string(pair.first) + ":" + pair.second + " ";
    }
    map_pub_.publish(map_msg);
  }

  void populateAndPublishSet() {
    std::set<std::string> my_set;

    // Populate the set
    my_set.insert("Apple");
    my_set.insert("Banana");
    my_set.insert("Orange");

    // Publish the set data
    std_msgs::String set_msg;
    set_msg.data = "Set Data: ";
    for (const auto &value : my_set) {
      set_msg.data += value + " ";
    }
    set_pub_.publish(set_msg);
  }
};

int main(int argc, char **argv) {
  ros::init(argc, argv, "map_set_example_node");
  MapSetExampleNode node;
  ros::spin();
  return 0;
}
