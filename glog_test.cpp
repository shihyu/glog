#include<iostream>   
#include<stdlib.h>   
#include<stdio.h>   
#include<string>   
   
//glog   
#include<glog/logging.h>   
using  namespace  std;   
   
int main(int argc, char* argv[]) 
{   
    // HOME_PATH   
    string home = "/home/shihyu/data/glog/log/";   
    //glog init   
    google::InitGoogleLogging(argv[0]);   
#if 1
    string info_log = home;
    google::SetLogDestination(google::INFO, info_log.c_str());   
    string warning_log = home +  "/log/master_warning_" ;   
    google::SetLogDestination(google::WARNING, warning_log.c_str());   
    string error_log = home +  "/log/master_error_" ;   
    google::SetLogDestination(google::ERROR, error_log.c_str());   
    string fatal_log = home +  "/log/master_fatal_" ;   
    google::SetLogDestination(google::FATAL, fatal_log.c_str());   
      
    LOG(INFO)<< "Hello Glog" ;  
#endif
    return  0;   
}  
