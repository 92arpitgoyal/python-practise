/*
SQLyog Enterprise - MySQL GUI v7.02 
MySQL - 5.0.67-community-nt : Database - test
*********************************************************************
*/

/*!40101 SET NAMES utf8 */;

/*!40101 SET SQL_MODE=''*/;

/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;

CREATE DATABASE /*!32312 IF NOT EXISTS*/`test` /*!40100 DEFAULT CHARACTER SET latin1 */;

USE `test`;

/*Table structure for table `tablename1` */

DROP TABLE IF EXISTS `tablename1`;

CREATE TABLE `tablename1` (
  `Name` varchar(30) default NULL,
  `Address` varchar(30) default NULL,
  `Id` int(10) default NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

/*Data for the table `tablename1` */

insert  into `tablename1`(`Name`,`Address`,`Id`) values ('Himanshu','Jaipur',1),('Arpit','Bilaspur',2);

/*!40101 SET SQL_MODE=@OLD_SQL_MODE */;
/*!40014 SET FOREIGN_KEY_CHECKS=@OLD_FOREIGN_KEY_CHECKS */;
