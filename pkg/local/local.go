package local

import (
	"fmt"
	"net"
)

func ListInterfaces() error {
	ifaces, err := net.Interfaces()
	if err != nil {
		return err
	}

	for _, i := range ifaces {
		addrs, err := i.Addrs()
		if err != nil {
			return err
		}

		for _, addr := range addrs {
			var ip net.IP
			switch v := addr.(type) {
			case *net.IPNet:
				ip = v.IP
			case *net.IPAddr:
				ip = v.IP
			}

			fmt.Printf("\n%v\n", ip)
		}
	}
	return nil
}
