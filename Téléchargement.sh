#!/bin/sh
# la majorité de ce code proviens d'internet
mkdir Archives_ratp
cd Archives_ratp
wget http://dataratp.download.opendatasoft.com/RATP_GTFS_LINES.zip -O temp.zip; unzip temp.zip; rm temp.zip;
for zip in *.zip
do
  dirname=`echo $zip | sed 's/\.zip$//'`
  if mkdir "$dirname"
  then
    if cd "$dirname"
    then
      unzip ../"$zip"
      cd ..
    else
      echo "Could not unpack $zip - cd failed"
    fi
  else
    echo "Could not unpack $zip - mkdir failed"
  fi
done
rm *.zip
