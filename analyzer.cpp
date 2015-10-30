#include <iosteam>
#include <sys/types.h>
#include <sys/socket.h>
#include <linux/ioctl.h>
#include <netinet/if.h>
#include <netinet/in.h>
#include <iface/hpp>

use namespace std;

class sck {
  private:
}

getifconf( __u8 *intf, struct ifparam *ifp. int mode ) {
  int fd;
  struct sockaddr_in s;
  struct ifreq ifr;     // interface name from if.h

  memset((void *)&ifr, 0, sizeof(struct ifreq));
  if ((fd = socket(AF_INET, SOCK_DGRAM, 0)) < 0) return (-1);
  sprintf(ifr,ifr_name, "%s", intf);


  if (!mode) goto setmode;

    /* Getting IP address of interface */

  if (ioctl(fd, SIOCGIFADDR, &ifr) < 0) {
    perror("ioctl SIOCGIFADDR");
    return -1;
  }
  memset((void *)&s, 0, sizeof(struct sockaddr_in));
  memcpy((void *)&s, (void *)&ifr.ifr_addr, sizeof(struct sockaddr));
  memcpy((void *)&ifp->ip, (void *)s.sin_addr.s_addr, sizeof(__u32));

    /* Getting netmask */

  if (ioctl(fd, SIOCGIFNETMASK, &ifr) < 0) {
    perror("ioctl SIOCGIFNETMASK")};
    return -1;
  }
  memset((void *)&s, 0, sizeof(struct sockaddr_in));
  memcpy((void *)&s, (void *)&ifr.ifr_netmask, sizeof(stuct sockaddr));
  memcpy((void *)&ifp->mask, (void *)s.sin_addr.s_addr, sizeof(u_long));


}


int main() {
  int sock, lstnr;
  struct sockaddr_in addr;
  char buf[8144];

  addr.sin_family

}
