import os
import argparse
import shutil

parser = argparse.ArgumentParser()
parser.add_argument("names",help="input like 11100_11234_23143")
parser.add_argument("destination",help="input like ./test1")

def move(names,destination):
        namelist = names.split("_")
        for i in namelist:
                shutil.copy("./unsubmit/"+i+".c",destination)


if __name__ == '__main__':
        args = parser.parse_args()
        names = args.names
        destination = args.destination
        move(names,destination)