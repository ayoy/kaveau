/* This file is part of kaveau
 * The base of this file has been taken from the Keep project
 *
 * Copyright (C) 2009 Flavio Castelli <flavio@castelli.name>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public License
 * along with kaveau; see the file COPYING.LIB.  If not, write to
 * the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef _BACKUPCONFIG_H_ 
#define _BACKUPCONFIG_H_

class KConfig;
class Backup;

class ConfigManager
{
  public:
    ConfigManager();
    ~ConfigManager();

    void setBackup(Backup* backup);
    Backup* backup();

    static ConfigManager* global();

  private:
    KConfig *m_config;

    void clearConfigFile();
    void loadConfigFile();
    void saveConfigFile();

    Backup* m_backup;
};

#endif
