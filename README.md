
# MCG 4134: Project 1 Code

## Project Owner:

|       Name       | Student Number |
|:----------------:|:--------------:|
| Mithun Jothiravi |   8209565   |

## Setup:
1. git clone this project into the `./src` directory within the `catkin_ws` workspace.

2. Partition current terminal into 3 terminals.

3. In *Terminal #1*, run the following to launch the ROS master:

    i) `$ catkin_make`
    
    ii) `$ source devel/setup.zsh`
    **NOTE:** If you use `bash` terminal, source the following: `$ source devel/setup.zsh` in all terminals.

    iii)`$ roscore`

4. In *Terminal #2*, run the following to launch parameter_config ROS project:

    i) `$ catkin_make`

    ii) `$ source devel/setup.zsh`

    iii) `$ rosrun parameter_config parameter_config`

5. In *Terminal #3*, run the following to launch rqt_configure UI.

    i) `$ catkin_make`

    ii) `$ source devel/setup.zsh`

    iii) `$ rosrun rqt_reconfigure rqt_reconfigure`

## Repository:

Entire project repo can be accessed [here](https://github.com/mithunnj/MCG4134).

