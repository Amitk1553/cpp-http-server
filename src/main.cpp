#include<iostream>

#include "../include/httplib.h"

int main() {

    // HTTP
    httplib::Server svr;

    svr.Get("/hi", [](const httplib::Request &, httplib::Response &res) {
    res.set_content("Hello from C++ server!", "text/plain");
    });

    svr.listen("0.0.0.0", 8080);

}