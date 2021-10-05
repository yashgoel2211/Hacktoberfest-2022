#! /usr/bin/env python
# command: Python excelParser.py <filename>.xlsx
import os
import sys
import re
import openpyxl
from datetime import datetime

fileName = sys.argv[1]

# File-related variables
txt = '%s.txt' % (fileName[:-5])
txt = os.path.join(txt)
txt = open(txt, 'w')

wb = openpyxl.load_workbook(fileName)
books = wb.get_sheet_names()
sh = wb.get_sheet_by_name(books[0])
detail = []
final_details = []

for row in list(sh.rows):
    col = []
    cols = list(row)
    for s in cols:
        s = str(s.value).replace("\n"," ")
        if s != 'NONE':
            detail.append(s)
        else:
            detail.append('')
        print(detail)
        final_details.append('|'.join(detail))

txt.write('\n'.join(final_details))
txt.close()
