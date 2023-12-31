#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/select.h>
#include <sys/socket.h>
#include <stdbool.h>
#include <pthread.h>
#include <math.h>
#include <strings.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/times.h>
#include <dirent.h>
#include <semaphore.h>
#include <sys/ioctl.h>
#include <errno.h>
#include <fcntl.h>
#include <poll.h>
#include <sys/types.h>
#include <stdint.h>
#include "LRU.h"
#include "External.h"
#include "NS.h"
#include "Helper.h"
#include "color.h"
#include "Trie.h"
#include "error_codes.h"
