from distutils.core import setup
setup(name='SDRTspendfrom',
      version='1.0',
      description='Command-line utility for sdrt "coin control"',
      author='Gavin Andresen',
      author_email='gavin@sdrtfoundation.org',
      requires=['jsonrpc'],
      scripts=['spendfrom.py'],
      )
