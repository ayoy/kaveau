/* This file is part of kaveau
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

#ifndef ADDBACKUPWIZARDPAGE1_H
#define ADDBACKUPWIZARDPAGE1_H

#include <QtGui/QWizardPage>

namespace Ui {
  class AddBackupWizardPage1View;
}

class AddBackupWizardPage1 : public QWizardPage
{
  Q_OBJECT

  public:
    AddBackupWizardPage1(QWidget* parent = 0);
    virtual ~AddBackupWizardPage1();

    bool isComplete () const;

  private slots:
    void slotRefresh();
    void slotDeviceItemSelectionChanged();

  signals:
    void completeChanged();

  private:
    void populateDeviceView();

    Ui::AddBackupWizardPage1View* m_view;
};

#endif // ADDBACKUPWIZARDPAGE1_H