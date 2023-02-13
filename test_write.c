#include <stdio.h>
#include <fcntl.h>
#include <sys/ioctl.h>
// #include <mtd/mtd-user.h>
#include <errno.h>
#include <unistd.h>

int main( void )
{
        int fd;
        char buf[1];
        buf[0]=0x04;

        fd = open("/dev/ml0", O_RDWR);
        // lseek(fd, 1, SEEK_SET);
        if(-1==write(fd, &buf, 1)){
            perror("perror output:");
        }
        
        
        usleep(1000);

        buf[0]=0x20;
        if(-1==write(fd, &buf, 1)){
            perror("perror output:");
        }

        close(fd);
        // perror("perror output:");




        return 0;
}


// if(-1 == write(fd, &buf, 4)){
  
// }
// close(fd);