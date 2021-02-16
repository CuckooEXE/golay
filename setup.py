"""
Setup script for golay package
"""


"""
Imported Libraries

setuptools - Create python package
"""
import setuptools


if __name__ == '__main__':
    with open('README.md', 'r') as f:
        long_desc = f.read()

    setuptools.setup(
        name='golay',
        version='1.0',
        author='Axel Persinger',
        author_email='me@axelp.io',
        description='Binary Golay error-correcting codes',
        long_description=long_desc,
        long_description_content_type='text/markdown',
        url='https://github.com/CuckooEXE/golay',
        packages=setuptools.find_packages(),
        classifiers=[
            "License :: OSI Approved :: MIT License",
            "Operating System :: OS Independent",
            "Topic :: Scientific/Engineering :: Mathematics"
        ]
    )