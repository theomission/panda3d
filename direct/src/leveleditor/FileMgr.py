import os
import imp

import ObjectGlobals as OG

class FileMgr:
    """ To handle data file """
    
    def __init__(self, editor):
        self.editor = editor

    def saveToFile(self, fileName):
        try:
            f = open(fileName, 'w')
            f.write("from pandac.PandaModules import *\n")
            f.write("\nobjectMgr = base.le.objectMgr\n")
            f.write("# temporary place holder for nodepath\n")
            f.write("objects = {}\n")
            saveData = self.editor.objectMgr.getSaveData()
            for data in saveData:
                f.write(data)
                f.write('\n')
            f.close()
        except IOError:
            print 'failed to save %s'%fileName
            if f:
                f.close()

    def loadFromFile(self, fileName):
        dirname, moduleName = os.path.split(fileName)
        if moduleName.endswith('.py'):
            moduleName = moduleName[:-3]

        file, pathname, description = imp.find_module(moduleName, [dirname])
        try:
            module = imp.load_module(moduleName, file, pathname, description)
        except:
            print 'failed to load %s'%fileName