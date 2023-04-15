#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
// #include <mtd/mtd-user.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>

int main( void )
{
        int fd;
        char buf[1];
        //open file
        fd = open("/dev/ml0", O_RDWR);

        printf("the file descriptor is %d\n",fd);
        if(fd<0){
            perror("perror output:");
            close(fd);
            exit(1);
        }

        

        

        buf[0]=0x20;

        
        if(-1==write(fd, &buf, 1)){
            perror("perror output:");
        }
        
        
        

        close(fd);
        




        return 0;
}


// if(-1 == write(fd, &buf, 4)){
  
// }
// close(fd);
