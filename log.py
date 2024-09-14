import os
import argparse
parser = argparse.ArgumentParser()
parser.add_argument("path")
parser.add_argument("output")

if __name__ == '__main__':
        args = parser.parse_args()
        file_path = args.path
        output_name = args.output
        with open(file_path,'r') as log_file:
                log = log_file.read()
                log = log.split()
                log_file.close
        log = [log[i:i+9] for i in range(0,len(log)-1,9)]
        strlog = []
        for i in range(len(log)-1,-1,-1):
                if log[i][3] == 'Accepted':
                        log[i] = [log[i][0],log[i][1],log[i][2],log[i][4],log[i][8]]
                        strlog.append(" ".join(log[i]))
        with open(output_name,'w') as file:
                for i in strlog:
                        file.write(i+"\n")
