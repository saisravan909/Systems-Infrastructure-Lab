#include <iostream>
#include <pcap.h>

/**
 * Project: NetScout Sniffer
 * Status: Boilerplate v1.0
 */
int main(int argc, char* argv[]) {
    char errbuf[PCAP_ERRBUF_SIZE];
    pcap_if_t *interfaces, *temp;

    if (pcap_findalldevs(&interfaces, errbuf) == -1) {
        std::cerr << "Error finding devices: " << errbuf << std::endl;
        return 1;
    }

    std::cout << "--- Systems Infrastructure Lab: Network Probe ---" << std::endl;
    for (temp = interfaces; temp; temp = temp->next) {
        std::cout << "Device: " << temp->name << std::endl;
    }

    pcap_freealldevs(interfaces);
    return 0;
}
