#!/bin/bash

ip_addresses=$(hostname -I)

ip_addresses=(${ip_addresses//" "/ })

echo "List of ip addresses"
for ip in "${ip_addresses[@]}";
do
  echo "$ip/n"
done
