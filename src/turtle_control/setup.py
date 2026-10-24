from setuptools import find_packages, setup

package_name = 'turtle_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/turtle_system.launch.py']),
        ('share/' + package_name + '/config', ['config/cfg.yaml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='habiba',
    maintainer_email='habibashaker25@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
            'turtle_control = turtle_control.goToPose_server:main',
            'reset_server = turtle_control.reset_server:main',
            'square_server = turtle_control.Square_server:main',
        ],
    },
)
