// Copyright (C) 2021 UOS Technology Co., Ltd.
// SPDX-FileCopyrightText: 2022 - 2023 UnionTech Software Technology Co., Ltd.
//
// SPDX-License-Identifier: GPL-3.0-or-later

#ifndef LFTDISKTOOL_H
#define LFTDISKTOOL_H

#include <QString>
#include <QByteArrayList>

class DDiskManager;
namespace LFTDiskTool
{
QByteArray pathToSerialUri(const QString &path);
QByteArrayList fromSerialUri(const QByteArray &uri);

DDiskManager *diskManager();
}

#endif // LFTDISKTOOL_H
