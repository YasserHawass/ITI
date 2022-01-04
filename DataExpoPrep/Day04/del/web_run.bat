%~d0
cd %~dp0
java -Dtalend.component.manager.m2.repository="%cd%/../lib" -Xms256M -Xmx1024M -cp .;../lib/routines.jar;../lib/log4j-slf4j-impl-2.13.2.jar;../lib/log4j-api-2.13.2.jar;../lib/log4j-core-2.13.2.jar;../lib/jsr311-api-1.1.1.jar;../lib/jboss-marshalling-2.0.12.Final.jar;../lib/jersey-client-1.19.jar;../lib/jersey-core-1.19.jar;../lib/accessors-smart-2.4.7.jar;../lib/dom4j-2.1.3.jar;../lib/json-smart-2.4.7.jar;../lib/slf4j-api-1.7.29.jar;../lib/json-path-2.1.0.jar;../lib/talendcsv-1.0.0.jar;../lib/crypto-utils-0.31.12.jar;web_0_1.jar; tal1.web_0_1.web --context=Default %*
