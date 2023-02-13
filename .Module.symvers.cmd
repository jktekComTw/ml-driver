cmd_/home/pi/ml-driver/Module.symvers := sed 's/ko$$/o/' /home/pi/ml-driver/modules.order | scripts/mod/modpost -m -a   -o /home/pi/ml-driver/Module.symvers -e -i Module.symvers   -T -
