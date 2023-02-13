cmd_/home/pi/ml-driver/modules.order := {   echo /home/pi/ml-driver/ml_driver.ko; :; } | awk '!x[$$0]++' - > /home/pi/ml-driver/modules.order
