// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SDRT_QT_SDRTADDRESSVALIDATOR_H
#define SDRT_QT_SDRTADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class SDRTAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SDRTAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** SDRT address widget validator, checks for a valid sdrt address.
 */
class SDRTAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SDRTAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // SDRT_QT_SDRTADDRESSVALIDATOR_H
